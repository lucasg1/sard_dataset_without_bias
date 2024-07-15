namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5()
{
    char * data;
    char * VAR3 = (char *)ALLOCA(sizeof(OneIntClass));
    char * VAR4 = (char *)ALLOCA(sizeof(TwoIntsClass));
    data = VAR3;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN2(char * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data)
{
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
<START>
        classTwo->intTwo = 10; 
<END>
        printIntLine(classTwo->intOne);
    }
}
} 
