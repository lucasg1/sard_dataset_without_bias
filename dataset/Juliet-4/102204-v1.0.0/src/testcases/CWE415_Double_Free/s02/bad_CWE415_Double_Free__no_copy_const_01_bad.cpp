namespace NAMESPACE0
{
} 
namespace NAMESPACE0
{
class BadClass 
{
    public:
        BadClass(const char *data)
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
        ~BadClass()
        {
            delete [] data;
        }
        void printData()
        {
            printLine(data);
        }
        BadClass& operator=(const BadClass &VAR2) 
        { 
            if (&VAR2 != this) 
            { 
                this->data = new char[strlen(VAR2.data) + 1];
                strcpy(this->data, VAR2.data);
            } 
            return *this; 
        }
    private:
        char *data;
};
void FUN0()
{
    BadClass VAR2("One");
<START>
    BadClass VAR2Copy(VAR2);
<END>
    VAR2Copy.printData();
}
} 
