/*
 * omap-mailbox: interprocessor communication module for OMAP
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef OMAP_MAILBOX_H
#define OMAP_MAILBOX_H

#if defined(CONFIG_ARCH_OMAP2PLUS) || defined(CONFIG_ARCH_KEYSTONE)
typedef u32 mbox_msg_t;
#elif defined(CONFIG_ARCH_K3)
typedef u64 mbox_msg_t;
#else
#error "Unsupported architecture"
#endif

#define to_omap_mbox_msg(data) (u32)(*(mbox_msg_t *)(&data))

typedef int __bitwise omap_mbox_irq_t;
#define IRQ_TX ((__force omap_mbox_irq_t) 1)
#define IRQ_RX ((__force omap_mbox_irq_t) 2)

struct mbox_chan;
struct mbox_client;

struct mbox_chan *omap_mbox_request_channel(struct mbox_client *cl,
					    const char *chan_name);

void omap_mbox_enable_irq(struct mbox_chan *chan, omap_mbox_irq_t irq);
void omap_mbox_disable_irq(struct mbox_chan *chan, omap_mbox_irq_t irq);

#endif /* OMAP_MAILBOX_H */