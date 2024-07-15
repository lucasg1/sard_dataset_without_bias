namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * VAR1 = (char *)malloc(sizeof(OneIntClass));
    if (VAR1 == NULL) {exit(-1);}
    char * VAR2 = (char *)malloc(sizeof(TwoIntsClass));
    if (VAR2 == NULL) {exit(-1);}
    switch(6)
    {
    case 6:
        data = VAR1;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        TwoIntsClass * classTwo = new(data) TwoIntsClass;
        classTwo->intOne = 5;
<START>
        classTwo->intTwo = 10; 
<END>
        printIntLine(classTwo->intOne);
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
