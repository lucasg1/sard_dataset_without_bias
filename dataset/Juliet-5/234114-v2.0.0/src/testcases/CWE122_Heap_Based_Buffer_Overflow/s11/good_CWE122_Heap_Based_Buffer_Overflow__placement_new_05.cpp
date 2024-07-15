static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
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
            free(data);
        }
    }
}
void FUN1()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
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
            free(data);
        }
    }
}
void FUN2()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
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
            free(data);
        }
    }
}
void FUN3()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
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
            free(data);
        }
    }
}
} 
