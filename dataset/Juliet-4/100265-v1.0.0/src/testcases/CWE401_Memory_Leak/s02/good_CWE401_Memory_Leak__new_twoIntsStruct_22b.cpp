namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int VAR3 = 0;
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    twoIntsStruct VAR4;
    data = &VAR4;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    VAR3 = 1; 
    FUN4(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0(twoIntsStruct * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN2(twoIntsStruct * data)
{
    if(VAR2)
    {
        delete data;
    }
}
void FUN4(twoIntsStruct * data)
{
    if(VAR3)
    {
        ; 
    }
}
} 
