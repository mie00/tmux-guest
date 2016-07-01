bin_SCRIPTS = guest guest-start
CLEANFILES = $(bin_SCRIPTS)

my_execbindir=$(sysconfdir)/$(PACKAGE)
my_execbin_PROGRAMS = template
template_SOURCES = template.c

install-exec-local:
	$(MKDIR_P) $(sysconfdir)/$(PACKAGE)/starters
	chmod 777 $(sysconfdir)/$(PACKAGE)/starters
