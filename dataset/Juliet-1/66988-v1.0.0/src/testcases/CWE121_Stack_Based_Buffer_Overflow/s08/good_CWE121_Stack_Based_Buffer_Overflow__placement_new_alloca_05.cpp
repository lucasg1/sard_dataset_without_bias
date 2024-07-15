static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    if(staticTrue)
    {
        data = VAR1;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            OneIntClass * classOne = new(data) OneIntClass;
            classOne->intOne = 5;
            printIntLine(classOne->intOne);
        }
    }
}
void FUN1()
{
    char * data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    if(staticTrue)
    {
        data = VAR1;
    }
    if(staticTrue)
    {
        {
            OneIntClass * classOne = new(data) OneIntClass;
            classOne->intOne = 5;
            printIntLine(classOne->intOne);
        }
    }
}
void FUN2()
{
    char * data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR2;
    }
    if(staticTrue)
    {
        {
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            classTwo->intOne = 5;
            classTwo->intTwo = 10; 
            printIntLine(classTwo->intOne);
        }
    }
}
void FUN3()
{
    char * data;
    char * VAR1 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR2 = (char *)ALLOCA(sizeof(TwoIntsClass));
    if(staticTrue)
    {
        data = VAR2;
    }
    if(staticTrue)
    {
        {
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            classTwo->intOne = 5;
            classTwo->intTwo = 10; 
            printIntLine(classTwo->intOne);
        }
    }
}
} 
