#ifndef _LIBSPI_H_
#define _LIBSPI_H_

//��ʼ��������������spi�ӿڲ������ļ����
int libspi_init();

//�����������ص�dat1��dat2��dat3���ڲ���dat������
int libspi_read(int fd, unsigned int reg, unsigned int* dat);

//д���������Ҫд���dat1, dat2, dat3�ŵ�dat������
int libspi_write(int fd, unsigned int reg, unsigned int* dat);
#endif