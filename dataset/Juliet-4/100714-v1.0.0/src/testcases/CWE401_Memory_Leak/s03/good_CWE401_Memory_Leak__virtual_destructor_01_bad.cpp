namespace NAMESPACE0
{
class GoodBaseClass
{
    public:
        GoodBaseClass()
        { 
            printLine("Constructor: GoodBaseClass");
        }
        virtual ~GoodBaseClass()
        {
            printLine("Destructor : GoodBaseClass");
        }
};
class GoodDerivedClass: public GoodBaseClass
{
    public:
        GoodDerivedClass(const char * name)
        { 
            printLine("Constructor: GoodDerivedClass");
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
        ~GoodDerivedClass()
        { 
            printLine("Destructor : GoodDerivedClass");
            delete [] name;
        }
        GoodDerivedClass(GoodDerivedClass &derivedClassObject)
        { 
            this->name = new char[strlen(derivedClassObject.name) + 1];
            strcpy(this->name, derivedClassObject.name);
        }
        GoodDerivedClass& operator=(const GoodDerivedClass &derivedClassObject)
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
    GoodBaseClass * baseClassObject = new GoodDerivedClass("GoodClass");
    delete baseClassObject;
}
} 
namespace NAMESPACE0
{
} 
