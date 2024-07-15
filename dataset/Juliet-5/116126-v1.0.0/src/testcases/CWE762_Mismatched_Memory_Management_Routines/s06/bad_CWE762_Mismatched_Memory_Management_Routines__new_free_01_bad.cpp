namespace NAMESPACE0
{
} 
namespace NAMESPACE0
{
class BadClass 
{
    public:
        BadClass(char letter)
        {
            this->letter = new char;
            memcpy(this->letter, &letter, sizeof(char));
        }
        ~BadClass()
        {
<START>
            free(letter);
<END>
        }
        BadClass(BadClass &VAR2)
        { 
            this->letter = new char;
            memcpy(this->letter, VAR2.letter, sizeof(char));
        }
        BadClass& operator=(const BadClass &VAR2) 
        { 
            if (&VAR2 != this) 
            { 
                this->letter = new char;
                memcpy(this->letter, VAR2.letter, sizeof(char));
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
    BadClass VAR2 ('B');
    VAR2.printLetter();
}
} 
