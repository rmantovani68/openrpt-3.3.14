# openrpt 3.3.14  
OpenRPT Report Writer version 3.3.14 

## ChangeLog 
- New icons  
- Better selection mode   
- Simpler installation  

## BUILD

install the following packages :

### fedora:
```
sudo dnf install qt5-qtbase-devel-5.15.11-7.fc39.x86_64 -y
sudo dnf install qt5-qtbase-postgresql-5.15.11-7.fc39.x86_64 -y
sudo dnf install qt5-qttools-* -y
```
### debian:
```
sudo apt-get install qt5-qtbase-devel-5.15.11-7.fc39.x86_64 -y
sudo apt-get install qt5-qtbase-postgresql-5.15.11-7.fc39.x86_64 -y
sudo apt-get install qt5-qttools-* -y
```

## INSTALL:
```
sudo ./install.sh

export LD_LIBRARY_PATH=/usr/local/lib
```

## command line :
```
rptrender -d mr -U roberto -passwd 3zin  -pdf -outpdf=ciccio.pdf  -close lista_articoli_totale.xml
```
