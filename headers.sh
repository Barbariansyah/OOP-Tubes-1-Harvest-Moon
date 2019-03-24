HEADER=All.h
echo "#ifndef __ALL_HEADERS__" > $HEADER
echo "#define __ALL_HEADERS__" >> $HEADER
for file in *.h
do
    echo "#include \"$file\"" >> $HEADER
done
echo "#endif" >> $HEADER