<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: github.com/TheThingsNetwork/api/router/router.proto

namespace Router;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>router.GatewayStatusResponse</code>
 */
class GatewayStatusResponse extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int64 last_seen = 1;</code>
     */
    private $last_seen = 0;
    /**
     * Generated from protobuf field <code>.gateway.Status status = 2 [(.gogoproto.nullable) = false];</code>
     */
    private $status = null;

    public function __construct() {
        \GPBMetadata\GithubCom\TheThingsNetwork\Api\Router\Router::initOnce();
        parent::__construct();
    }

    /**
     * Generated from protobuf field <code>int64 last_seen = 1;</code>
     * @return int|string
     */
    public function getLastSeen()
    {
        return $this->last_seen;
    }

    /**
     * Generated from protobuf field <code>int64 last_seen = 1;</code>
     * @param int|string $var
     * @return $this
     */
    public function setLastSeen($var)
    {
        GPBUtil::checkInt64($var);
        $this->last_seen = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.gateway.Status status = 2 [(.gogoproto.nullable) = false];</code>
     * @return \Gateway\Status
     */
    public function getStatus()
    {
        return $this->status;
    }

    /**
     * Generated from protobuf field <code>.gateway.Status status = 2 [(.gogoproto.nullable) = false];</code>
     * @param \Gateway\Status $var
     * @return $this
     */
    public function setStatus($var)
    {
        GPBUtil::checkMessage($var, \Gateway\Status::class);
        $this->status = $var;

        return $this;
    }

}

