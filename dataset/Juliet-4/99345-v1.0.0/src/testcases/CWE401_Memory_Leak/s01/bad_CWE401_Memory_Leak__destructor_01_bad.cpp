namespace NAMESPACE0
{
} 
namespace NAMESPACE0
{
class BadClass 
{
    public:
        BadClass(const char * name)
        {
            if (name)
            {
                this->name = new char[strlen(name) + 1];
                strcpy(this->name, name);
            }
            else
            {
                this->name = new char[1];
                *(this->name) = '\0';
            }
        }
        ~BadClass()
        {
<START>
<END>
        }
        BadClass(BadClass &VAR2)
        { 
            this->name = new char[strlen(VAR2.name) + 1];
            strcpy(this->name, VAR2.name);
        }
        BadClass& operator=(const BadClass &VAR2) 
        { 
            if (&VAR2 != this) 
            { 
                this->name = new char[strlen(VAR2.name) + 1];
                strcpy(this->name, VAR2.name);
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
