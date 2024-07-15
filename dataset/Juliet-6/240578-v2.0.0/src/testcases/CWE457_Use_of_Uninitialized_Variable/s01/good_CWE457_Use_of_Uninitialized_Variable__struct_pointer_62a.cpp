namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data->intOne = 5;
    data->intTwo = 6;
}
void FUN1(twoIntsStruct * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data);
void FUN3()
{
    twoIntsStruct * data;
    FUN0(data);
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}
void FUN1(twoIntsStruct * &data);
void FUN5()
{
    twoIntsStruct * data;
    FUN1(data);
    data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data->intOne = 5;
    data->intTwo = 6;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}
} 
