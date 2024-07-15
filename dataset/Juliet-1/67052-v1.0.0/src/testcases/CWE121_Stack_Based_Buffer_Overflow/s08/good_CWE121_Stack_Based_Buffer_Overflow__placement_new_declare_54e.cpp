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
void FUN5(char * data)
{
    FUN4(data);
}
void FUN6(char * data);
void FUN7(char * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN0(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN2(char * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN13()
{
    char * data;
    char VAR4[sizeof(OneIntClass)];
    char VAR5[sizeof(TwoIntsClass)];
    data = VAR5;
    FUN1(data);
}
void FUN3(char * data);
void FUN15()
{
    char * data;
    char VAR4[sizeof(OneIntClass)];
    char VAR5[sizeof(TwoIntsClass)];
    data = VAR4;
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data)
{
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
        classTwo->intTwo = 10; 
        printIntLine(classTwo->intOne);
    }
}
void FUN6(char * data)
{
    {
        OneIntClass * classOne = new(data) OneIntClass;
        classOne->intOne = 5;
        printIntLine(classOne->intOne);
    }
}
} 
