ssh $USER@cygni-gw "mkdir -p $TARGET_ROOT/$PROJECT" && scp -r .bender .* $USER@cygni-gw:$TARGET_ROOT/$PROJECT && clear && echo " " && echo "Files Benderized, Generated and Transfered -- Check the Synthesis Server" && echo " " 
