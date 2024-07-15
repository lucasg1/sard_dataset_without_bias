namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = NULL;
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
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
