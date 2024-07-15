namespace NAMESPACE0
{
class GoodClass 
{
    public:   
        GoodClass(char letter)
        {
            this->letter = new char;
            memcpy(this->letter, &letter, sizeof(char));
        }
        ~GoodClass()
        {
            delete letter;
        }
        GoodClass(GoodClass &VAR1)
        { 
            this->letter = new char;
            memcpy(this->letter, VAR1.letter, sizeof(char));
        }
        GoodClass& operator=(const GoodClass &VAR1) 
        { 
            if (&VAR1 != this) 
            { 
                this->letter = new char;
                memcpy(this->letter, VAR1.letter, sizeof(char));
            } 
            return *this; 
        }
        void printLetter()
        {
            printf("%c\n", *letter);
        }
    private:
        char * letter;
};
void FUN0()
{
    GoodClass VAR1 ('G');
    VAR1.printLetter();
}
} 
namespace NAMESPACE0
{
} 
