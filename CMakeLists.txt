cmake_minimum_required(VERSION 3.10)
project(postgres)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "-D_GNU_SOURCE")


include_directories(include)
include_directories(backend)
include_directories(backend/bootstrap)
include_directories(backend/port)


AUX_SOURCE_DIRECTORY(backend/access/brin SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/common SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/gin SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/gist SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/hash SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/heap SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/index SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/nbtree SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/rmgrdesc SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/spgist SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/tablesample SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/access/transam SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/bootstrap SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/catalog SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/commands SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/executor SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/foreign SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/lib SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/libpq SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/main SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/nodes SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/optimizer/geqo SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/optimizer/path SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/optimizer/plan SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/optimizer/prep SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/optimizer/util SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/parser SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/port SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/postmaster SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/regex SOURCE_FILES)

include_directories(backend/replication/libpqwalreceiver)
#AUX_SOURCE_DIRECTORY(backend/replication/libpqwalreceiver SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/replication/libpqwalreceiver libpqwalreceiverSOURCE_FILES)
add_library(pqwalreceiver SHARED ${libpqwalreceiverSOURCE_FILES})

AUX_SOURCE_DIRECTORY(backend/replication/logical SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/replication/pgoutput pgoutputSOURCE_FILES)
add_library(pgoutput SHARED ${pgoutputSOURCE_FILES})
AUX_SOURCE_DIRECTORY(backend/replication SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/rewrite SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/statistics SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/storage/buffer SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/storage/file SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/storage/freespace SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/storage/ipc SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/storage/large_object SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/storage/lmgr SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/storage/page SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/storage/smgr SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/tcop SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/tsearch SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/utils/adt SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/cache SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/error SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/fmgr SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/hash SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/init SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/mb SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/misc SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/mmgr SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/resowner SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/sort SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils/time SOURCE_FILES)
AUX_SOURCE_DIRECTORY(backend/utils SOURCE_FILES)

AUX_SOURCE_DIRECTORY(backend/timezone SOURCE_FILES)


link_directories(liba)

add_executable(postgres ${SOURCE_FILES} backend/port/pg_shmem.c)
target_link_libraries(postgres pgport pgcommon dl rt m z  pthread)
#readline  termcap ncurses curses pgport