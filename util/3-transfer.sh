
source util/0-env-config.sh

ssh $USER@cygni-gw.esat.kuleuven.be "mkdir -p $TARGET_ROOT/$PROJECT" && scp -r .bender * $USER@cygni-gw.esat.kuleuven.be:$TARGET_ROOT/$PROJECT && clear && echo " " && echo "Files Benderized, Generated and Transfered -- Check the Synthesis Server" && echo " " 