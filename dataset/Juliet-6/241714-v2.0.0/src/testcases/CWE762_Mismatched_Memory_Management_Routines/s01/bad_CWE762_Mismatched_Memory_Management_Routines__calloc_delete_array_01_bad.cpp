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
            this->name = (char *)calloc(strlen(name)+1, sizeof(char));
            if (this->name == NULL) {exit(-1);}
            strcpy(this->name, name);
        }
        ~BadClass()
        {
<START>
            delete [] name;
<END>
        }
        BadClass(BadClass &VAR2)
        { 
            this->name = (char *) calloc(strlen(VAR2.name)+1, sizeof(char));
            if (this->name == NULL) {exit(-1);}
            strcpy(this->name, VAR2.name);
        }
        BadClass& operator=(const BadClass &VAR2) 
        { 
            if (&VAR2 != this) 
            { 
                this->name = (char *) calloc(strlen(VAR2.name)+1, sizeof(char));
                if (this->name == NULL) {exit(-1);}
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
