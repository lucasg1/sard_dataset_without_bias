namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN5()
{
    char * data;
    char * VAR2 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR3 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR3;
    FUN4(data);
}
void FUN6(char * data);
void FUN7()
{
    char * data;
    char * VAR2 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR3 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR2;
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN4(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN6(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
    }
}
void FUN2(char * data)
{
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
    }
}
} 
