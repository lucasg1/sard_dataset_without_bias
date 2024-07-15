namespace NAMESPACE0
{
class GoodClass 
{
	public:
		GoodClass() 
        {
			name = NULL;
		}
		GoodClass(const char * name) 
        {
			if (name)
            {
                this->name = new char[strlen(name) + 1];
                strcpy(this->name, name);
            } 
            else 
            {
                this->name = new char[1];
                *(this->name) = '\0';
            }
		}
		~GoodClass() 
        {
			delete [] name;
		}
		GoodClass(GoodClass &VAR1)
        { 
			this->name = new char[strlen(VAR1.name)+1]; 
			strcpy(this->name, VAR1.name);
		}
		GoodClass& operator=(const GoodClass& VAR1) 
        {
			if (this != &VAR1) 
            {
				delete [] this->name;
				this->name = new char[strlen(VAR1.name)+1]; 
				strcpy(this->name, VAR1.name);
			}
			return *this;
		}
		char * name;
};
void FUN0()
{
    GoodClass VAR1("GoodClass");
	VAR1 = VAR1;
	printLine(VAR1.name);
}
} 
namespace NAMESPACE0
{
} 
