namespace NAMESPACE0
{
class GoodClass 
{
    public:    
        GoodClass(char * name)
        {
            this->name = strdup(name);
        }
        ~GoodClass()
        {
            free(name);
        }
        GoodClass(GoodClass &VAR1)
        { 
            this->name = strdup(VAR1.name);
        }
        GoodClass& operator=(const GoodClass &VAR1) 
        { 
            if (&VAR1 != this) 
            { 
                this->name = strdup(VAR1.name);
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
