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
void FUN3(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN7()
{
    char * data;
    char VAR4[sizeof(OneIntClass)];
    char VAR5[sizeof(TwoIntsClass)];
    data = VAR4;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data)
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
