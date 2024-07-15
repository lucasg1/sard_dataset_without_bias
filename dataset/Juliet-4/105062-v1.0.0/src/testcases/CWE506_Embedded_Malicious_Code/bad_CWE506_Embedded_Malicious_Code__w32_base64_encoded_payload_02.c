void FUN0()
{
    if(1)
    {
        {
<START>
            char * encodedPayload = "Y2FsYy5leGU=";
<END>
            BYTE * decodedPayload = NULL;
            DWORD requiredLength;
            do
            {
                if (!CryptStringToBinaryA(encodedPayload,
                                          strlen(encodedPayload),
                                          CRYPT_STRING_BASE64,
                                          NULL,
                                          &requiredLength,
                                          NULL,
                                          NULL))
                {
                    break;
                }
                decodedPayload = (BYTE*) malloc(requiredLength + 1);
                if (decodedPayload == NULL)
                {
                    break;
                }
                if (!CryptStringToBinaryA(encodedPayload,
                                          strlen(encodedPayload),
                                          CRYPT_STRING_BASE64,
                                          decodedPayload,
                                          &requiredLength,
                                          NULL,
                                          NULL))
                {
                    break;
                }
                decodedPayload[requiredLength] = '\0';
                if (system((char*)decodedPayload) <= 0)
                {
                    printLine("command execution failed!");
                    exit(1);
                }
            }
            while (0);
            free(decodedPayload);
        }
    }
}
