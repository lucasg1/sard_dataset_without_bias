namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
