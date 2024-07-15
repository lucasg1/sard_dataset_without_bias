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
        BadClass(BadClass &VAR2)
        { 
            this->data = new char[strlen(VAR2.data) + 1];
            strcpy(this->data, VAR2.data); 
        }
    private:
        char *data;
};
void FUN0()
{
    BadClass VAR3("One"), VAR4("Two");
<START>
    VAR4 = VAR3;
<END>
    VAR4.printData();
}
} 
