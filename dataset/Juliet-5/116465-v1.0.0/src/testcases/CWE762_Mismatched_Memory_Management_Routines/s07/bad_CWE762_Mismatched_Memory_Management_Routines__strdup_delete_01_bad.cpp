namespace NAMESPACE0
{
} 
namespace NAMESPACE0
{
class BadClass 
{
    public:   
        BadClass(char * name)
        {
            this->name = strdup(name);
        }
        ~BadClass()
        {
<START>
            delete name;
<END>
        }
        BadClass(BadClass &VAR2)
        { 
            this->name = strdup(VAR2.name);
        }
        BadClass& operator=(const BadClass &VAR2) 
        { 
            if (&VAR2 != this) 
            { 
                this->name = strdup(VAR2.name);
            } 
            return *this; 
        }
        void printName()
        {
            printLine(name);
        }
    private:
        char * name;
};
void FUN0()
{
    BadClass VAR2 ("BadClass");
    VAR2.printName();
}
} 
