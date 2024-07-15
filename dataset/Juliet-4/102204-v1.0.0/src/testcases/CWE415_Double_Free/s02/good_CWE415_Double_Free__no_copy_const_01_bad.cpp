namespace NAMESPACE0
{
class GoodClass 
{
    public:
        GoodClass(const char *data)
        {
            if (data) 
            {
                this->data = new char[strlen(data) + 1];
                strcpy(this->data, data);
            } 
            else 
            {
                this->data = new char[1];
                *(this->data) = '\0';
            }
        }
        ~GoodClass()
        {
            delete [] data;
        }
        void printData()
        {
            printLine(data);
        }
        GoodClass(GoodClass &VAR1)
        { 
            this->data = new char[strlen(VAR1.data) + 1];
            strcpy(this->data, VAR1.data);
        }
        GoodClass& operator=(const GoodClass &VAR1) 
        { 
            if (&VAR1 != this) 
            { 
                this->data = new char[strlen(VAR1.data) + 1];
                strcpy(this->data, VAR1.data); 
            } 
            return *this; 
        }
    private:
        char *data;
};
void FUN0()
{
    GoodClass VAR1("One");
    GoodClass VAR4(VAR1);
    VAR4.printData();
}
} 
namespace NAMESPACE0
{
} 
