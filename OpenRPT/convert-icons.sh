#!/bin/bash 

theme="MacOS-3D-Icons-Red-Light/actions/scalable-dark"
theme="WhiteSur-green/actions/24"

for i in 16 24 32 48 64 
do
    echo $i

    size="$i"x"$i"
    mv images/icons_$size/document_$size.png         images/icons_$size/document_$size-old.png          ; convert /usr/share/themes/$theme/document-new.svg images/icons_$size/document_$size.png
    mv images/icons_$size/files_zoom_$size.png       images/icons_$size/files_zoom_$size-old.png        ; convert /usr/share/themes/$theme/document-open.svg images/icons_$size/files_zoom_$size.png
    mv images/icons_$size/diskette_$size.png         images/icons_$size/diskette_$size-old.png          ; convert /usr/share/themes/$theme/document-save.svg images/icons_$size/diskette_$size.png
    mv images/icons_$size/scissors_$size.png         images/icons_$size/scissors_$size-old.png          ; convert /usr/share/themes/$theme/edit-cut.svg images/icons_$size/scissors_$size.png
    mv images/icons_$size/copy_$size.png             images/icons_$size/copy_$size-old.png              ; convert /usr/share/themes/$theme/edit-copy.svg images/icons_$size/copy_$size.png
    mv images/icons_$size/paste_$size.png            images/icons_$size/paste_$size-old.png             ; convert /usr/share/themes/$theme/edit-paste.svg images/icons_$size/paste_$size.png
    mv images/icons_$size/delete_$size.png           images/icons_$size/delete_$size-old.png            ; convert /usr/share/themes/$theme/edit-delete.svg images/icons_$size/delete_$size.png
    mv images/icons_$size/font_$size.png             images/icons_$size/font_$size-old.png              ; convert /usr/share/themes/$theme/gtk-select-font.svg images/icons_$size/font_$size.png
    mv images/icons_$size/numeric_field_$size.png    images/icons_$size/numeric_field_$size-old.png     ; convert /usr/share/themes/$theme/view-grid.svg images/icons_$size/numeric_field_$size.png
    mv images/icons_$size/numeric_field_ok_$size.png images/icons_$size/numeric_field_ok_$size-old.png  ; convert /usr/share/themes/$theme/snap-grid-guide-intersections.svg images/icons_$size/numeric_field_ok_$size.png
    mv images/icons_$size/database_add_$size.png     images/icons_$size/database_add_$size-old.png      ; convert /usr/share/themes/$theme/document-export.svg images/icons_$size/database_add_$size.png
    mv images/icons_$size/export_database_$size.png  images/icons_$size/export_database_$size-old.png   ; convert /usr/share/themes/$theme/document-import.svg images/icons_$size/export_database_$size.png

    mv images/icons_$size/text_field_$size.png  images/icons_$size/text_field_$size-old.png   ; convert /usr/share/themes/$theme/draw-text.svg images/icons_$size/text_field_$size.png
    mv images/icons_$size/barcode_$size.png  images/icons_$size/barcode_$size-old.png   ; convert /usr/share/icons/default/barcode.svg images/icons_$size/barcode_$size.png

done

mv images/printer_32.png                         images/printer_32-old.png                          ; convert /usr/share/themes/$theme/document-print.svg images/printer_32.png
mv images/undo_32.png                            images/undo_32-old.png                             ; convert /usr/share/themes/$theme/edit-undo.svg images/undo_32.png
mv images/paste_32.png                           images/paste_32-old.png                            ; convert /usr/share/themes/$theme/edit-paste.svg images/paste_32.png
mv images/folder_32.png                          images/folder_32-old.png                           ; convert /usr/share/themes/$theme/document-open.svg images/folder_32.png
mv images/copy_32.png                            images/copy_32-old.png                             ; convert /usr/share/themes/$theme/edit-copy.svg images/copy_32.png
mv images/scissors_32.png                        images/scissors_32-old.png                         ; convert /usr/share/themes/$theme/edit-cut.svg images/scissors_32.png
mv images/diskette_32.png                        images/diskette_32-old.png                         ; convert /usr/share/themes/$theme/document-save.svg images/diskette_32.png
mv images/document_32.png                        images/document_32-old.png                         ; convert /usr/share/themes/$theme/document-new.svg images/document_32.png
mv images/help_32.png                            images/help_32-old.png                             ; convert /usr/share/themes/$theme/help-about.svg images/help_32.png

