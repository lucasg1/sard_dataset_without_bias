namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    data = VAR1;
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
<START>
        classTwo->intTwo = 10; 
<END>
        printIntLine(classTwo->intOne);
        free(data);
    }
}
} 
