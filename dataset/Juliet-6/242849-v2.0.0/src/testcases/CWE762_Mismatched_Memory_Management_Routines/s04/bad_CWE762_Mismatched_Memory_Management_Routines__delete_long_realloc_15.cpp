namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
        if (data == NULL) {exit(-1);}
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        delete data;
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
