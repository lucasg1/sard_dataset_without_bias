namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int;
    *data = 5;
    printIntLine(*data);
    goto sink;
sink:
<START>
<END>
    ; 
}
} 
