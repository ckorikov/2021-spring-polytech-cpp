
template<typename T>
class SharedPtr
{

public:
    explicit SharedPtr(T* newPtr)
    {
        thePtr = newPtr;
        owners = new int(1);
    }

    SharedPtr& operator=(const SharedPtr& other)
    {

        if (this == &other)
        {
            return *this;
        }

        Clear();

        thePtr = other.thePtr;
        owners = other.owners;
        (*owners)++;
        
        return *this;
    }

    SharedPtr(const SharedPtr& other)
    {
        (*this).operator=(other);
    }
    
    void Clear()
    {
        if (owners)
        {
            if ((*owners) == 1)
            {
                delete[] thePtr;
                delete owners;
            }
            else
            {
                (*owners)--;
            }


        }
    }
    
    ~SharedPtr()
    {
        Clear();
    }

    T* Get()
    {
        return thePtr;
    }
    int GetOwners()
    {
        return *owners;
    }

private:

    T* thePtr = nullptr;
    int* owners = nullptr;

};
