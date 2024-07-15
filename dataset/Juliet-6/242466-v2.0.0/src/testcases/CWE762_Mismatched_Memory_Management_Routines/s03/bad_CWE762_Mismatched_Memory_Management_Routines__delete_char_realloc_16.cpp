namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = NULL;
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
<START>
        delete data;
<END>
        break;
    }
}
} 
