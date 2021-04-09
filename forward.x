const MAXLEN = 20;

struct file {
	char filename[MAXLEN];
	char content[MAXLEN];
	int nbytes;
	int checksum;
};

program FILEFORWARD {
	version FILEFORWARD_1 {
		int FILEFWD(file) = 1;
	} = 1;
} = 0x31230000;
