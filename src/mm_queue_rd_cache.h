#ifndef MM_QUEUE_RD_CACHE_H_
#define MM_QUEUE_RD_CACHE_H_

/*
 * machinarium.
 *
 * cooperative multitasking engine.
*/

typedef struct mm_queuerdcache_t mm_queuerdcache_t;

struct mm_queuerdcache_t {
	mm_list_t list;
	int       count;
};

void mm_queuerdcache_init(mm_queuerdcache_t*);
void mm_queuerdcache_free(mm_queuerdcache_t*);

mm_queuerd_t*
mm_queuerdcache_pop(mm_queuerdcache_t*);

void mm_queuerdcache_push(mm_queuerdcache_t*, mm_queuerd_t*);

#endif
