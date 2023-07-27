int returnChunkSize(void *ptr) {
    /* calculate the size of the chunk pointed by ptr */
}

int main() {
    void *destBuf = malloc(100);
    void *srcBuf = malloc(100);

    // Check if destBuf and srcBuf are valid pointers
    if (destBuf == NULL || srcBuf == NULL) {
        // Handle the error
    }

    // Calculate the chunk size
    int chunkSize = returnChunkSize(destBuf);

    // Make sure chunkSize is a positive value
    if (chunkSize <= 0) {
        // Handle the error
    }

    // Make sure the memcpy operation does not exceed the chunk size
    if (chunkSize >= 1) {
        memcpy(destBuf, srcBuf, chunkSize - 1);
    } else {
        // Handle the error
    }

    // Free the allocated memory
    free(destBuf);
    free(srcBuf);

    return 0;
}
