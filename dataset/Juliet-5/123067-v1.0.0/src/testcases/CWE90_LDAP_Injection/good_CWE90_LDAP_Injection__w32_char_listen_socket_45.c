static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        LDAP* pLdapConnection = NULL;
        ULONG connectSuccess = 0L;
        ULONG searchSuccess = 0L;
        LDAPMessage *pMessage = NULL;
        char filter[256];
        _snprintf(filter, 256-1, "(cn=%s)", data);
        pLdapConnection = ldap_initA("localhost", LDAP_PORT);
        if (pLdapConnection == NULL)
        {
            printLine("Initialization failed");
            exit(1);
        }
        connectSuccess = ldap_connect(pLdapConnection, NULL);
        if (connectSuccess != LDAP_SUCCESS)
        {
            printLine("Connection failed");
            exit(1);
        }
        searchSuccess = ldap_search_ext_sA(
                            pLdapConnection,
                            "base",
                            LDAP_SCOPE_SUBTREE,
                            filter,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            LDAP_NO_LIMIT,
                            LDAP_NO_LIMIT,
                            &pMessage);
        if (searchSuccess != LDAP_SUCCESS)
        {
            printLine("Search failed");
            if (pMessage != NULL)
            {
                ldap_msgfree(pMessage);
            }
            exit(1);
        }
        if (pMessage != NULL)
        {
            ldap_msgfree(pMessage);
        }
        ldap_unbind(pLdapConnection);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[256] = "";
    data = dataBuffer;
    strcat(data, "Doe, XXXXX");
    VAR1 = data;
    FUN0();
}
