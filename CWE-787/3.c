void host_lookup(char *user_supplied_addr){
    struct hostent *hp;
    in_addr_t *addr;
    char hostname[64];
    in_addr_t inet_addr(const char *cp);

    /*routine that ensures user_supplied_addr is in the right format for conversion */
    validate_addr_form(user_supplied_addr);

    // Convert user_supplied_addr to network address format
    addr = inet_addr(user_supplied_addr);

    // Make sure addr is not NULL
    if (addr == NULL) {
        // Handle the error
    }

    // Perform the host lookup
    hp = gethostbyaddr(addr, sizeof(struct in_addr), AF_INET);

    // Make sure hp is not NULL
    if (hp == NULL) {
        // Handle the error
    }

    // Copy the hostname to the hostname buffer
    strncpy(hostname, hp->h_name, sizeof(hostname)-1);
    hostname[sizeof(hostname)-1] = '\0';
}
