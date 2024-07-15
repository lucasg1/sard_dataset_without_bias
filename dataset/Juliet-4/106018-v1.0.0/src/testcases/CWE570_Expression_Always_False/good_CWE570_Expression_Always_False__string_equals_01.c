void FUN0() 
{
    char charString[10] = "";
    int charStringLen;
    if (fgets(charString, 10, stdin) == NULL)
    {
        printLine("fgets() failed.");
        charString[0] = '\0';
    }
    charStringLen = strlen(charString);
    if (charStringLen > 0)
    {
        charString[charStringLen-1] = '\0';
    }
    if(strcmp(charString, "true") == 0)
    {
        printLine("Sometimes prints");
    }
}
void FUN1() 
{
    FUN0();
}
