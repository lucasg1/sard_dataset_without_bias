namespace NAMESPACE0
{
} 
namespace NAMESPACE0
{
class BadBaseClass
{
    public:
        BadBaseClass()
        { 
            printLine("Constructor: BadBaseClass");
        }
<START>
        ~BadBaseClass()
<END>
        { 
            printLine("Destructor : BadBaseClass");
        }
};
class BadDerivedClass: public BadBaseClass
{
    public:
        BadDerivedClass(const char * name)
        {
            printLine("Constructor: BadDerivedClass");
            if (name)
            {
                this->name = new char[strlen(name) + 1];
                strcpy(this->name, name);
                printLine(this->name);
            }
            else
            {
                this->name = new char[1];
                *(this->name) = '\0';
            }
        }
        ~BadDerivedClass()
        {
            printLine("Destructor : BadDerivedClass");
            delete [] name;
        }
        BadDerivedClass(BadDerivedClass &derivedClassObject)
        { 
            this->name = new char[strlen(derivedClassObject.name) + 1];
            strcpy(this->name, derivedClassObject.name);
        }
        BadDerivedClass& operator=(const BadDerivedClass &derivedClassObject)
        { 
            if (&derivedClassObject != this) 
            { 
                this->name = new char[strlen(derivedClassObject.name) + 1];
                strcpy(this->name, derivedClassObject.name);
            } 
            return *this; 
        }
    private:
        char * name;
};
void FUN0()
{
    BadBaseClass * baseClassObject = new BadDerivedClass("BadClass");
    delete baseClassObject;
}
} 
