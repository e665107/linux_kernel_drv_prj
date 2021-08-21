# KERN_DIR = /home/e66/sunxi/buildroot-2019.11/output/build/linux-4.19.38/
KERN_DIR = /home/e66/imx/linux_imx_new/kernel_imx/
CROSS=/home/e66/imx/gcc-linaro-7.3.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-

all: uio_user_app
	make -C $(KERN_DIR) M=`pwd` modules 

clean:
	make -C $(KERN_DIR) M=`pwd`  clean
	rm -rf modules.order
	@rm -vf uio_user_app  *.o *~
obj-m	+= uio_test0.o

uio_user_app: 
	$(CROSS)gcc -o uio_user_app uio_user_app.c
