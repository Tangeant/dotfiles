for filename in *.png; do file=`echo "$filename"`;convert $filename -fuzz 100% -fill '#FFA726' -opaque white $file;done
