namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    FILE * &dataRef = data;
    data = NULL;
    data = fopen("file.txt", "w+");
    {
        FILE * data = dataRef;
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
} 
