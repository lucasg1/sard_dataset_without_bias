namespace NAMESPACE0
{
} 
namespace NAMESPACE0
{
class BadClass 
{
    public:
        BadClass() 
        {
            name = NULL;
        }
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
            delete [] name;
        }
        BadClass(BadClass &VAR2)
        { 
            this->name = new char[strlen(VAR2.name)+1]; 
            strcpy(this->name, VAR2.name);
        }
        BadClass& operator=(const BadClass& VAR2) 
        {
            delete [] this->name;
            this->name = new char[strlen(VAR2.name)+1]; 
<START>
            strcpy(this->name, VAR2.name); 
            return *this;
        }
        char * name;
};
void FUN0()
{
    BadClass VAR2("BadClass");
    VAR2 = VAR2;
    printLine(VAR2.name);
}
} 
