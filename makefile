app: *.c
	clang *.c -o app
#gcc a.m `gnustep-config --objc-flags` -lobjc -lgnustep-base -o app
clean:
	rm app
