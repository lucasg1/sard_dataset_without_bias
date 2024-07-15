namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    strcat(data, "file.txt");
    {
        char * data = dataRef;
        {
            int fileDesc;
            fileDesc = OPEN(data, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
            if (fileDesc != -1)
            {
                CLOSE(fileDesc);
            }
        }
    }
}
} 
