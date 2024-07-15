namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
<START>
        delete data;
<END>
    }
}
} 
