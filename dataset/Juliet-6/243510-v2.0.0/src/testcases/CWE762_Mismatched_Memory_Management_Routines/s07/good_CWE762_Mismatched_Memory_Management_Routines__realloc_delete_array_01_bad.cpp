namespace NAMESPACE0
{
class GoodClass 
{
    public:
        GoodClass(char * name)
        {
            this->name = NULL;
            this->name = (char *)realloc(this->name, strlen(name)+1);
            if (this->name == NULL) {exit(-1);}
            strcpy(this->name, name);
        }
        ~GoodClass()
        {
            free(name);
        }
        GoodClass(GoodClass &VAR1)
        { 
            this->name = (char *)realloc(name, strlen(VAR1.name)+1);
            if (this->name == NULL) {exit(-1);}
            strcpy(this->name, VAR1.name);
        }
        GoodClass& operator=(const GoodClass &VAR1) 
        { 
            if (&VAR1 != this) 
            { 
                this->name = (char *)realloc(this->name, strlen(VAR1.name)+1);
                if (this->name == NULL) {exit(-1);}
                strcpy(this->name, VAR1.name);
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
    GoodClass VAR1 ("GoodClass");
    VAR1.printName();
}
} 
namespace NAMESPACE0
{
} 
