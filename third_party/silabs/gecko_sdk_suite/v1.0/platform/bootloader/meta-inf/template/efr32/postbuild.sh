#!/bin/sh

# This file was generated by Simplicity Studio from the following template:
#   platform/bootloader/meta-inf/template/efr32/efr32-postbuild.sh
# Please do not edit it directly.

# Post Build processing for bootloader

# use PATH_SCMD env var to override default path for Simplicity Commander
if [[ -z ${PATH_SCMD} ]]; then
  COMMANDER="$--commanderPath--$"
  if [[ `uname` == CYGWIN* ]]; then COMMANDER="`cygpath ${COMMANDER}`"; fi
else
  COMMANDER="${PATH_SCMD}/commander"
fi

if [[ ! -f "${COMMANDER}" ]]; then
  echo "Error: Simplicity Commander not found at '${COMMANDER}'"
  echo "Use PATH_SCMD env var to override default path for Simplicity Commander."
  exit
fi

FILENAME=$1

echo " "
echo "Add first stage bootloader to image (${FILENAME}-combined.s37)"
echo " "
"${COMMANDER}" convert "$--firstStageS37File--$" "${FILENAME}.s37" -o "${FILENAME}-combined.s37"
